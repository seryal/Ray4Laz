unit raymedia;

{$mode objfpc}{$H+}
{$packrecords c}
{$ALIGN 8}
{$MINENUMSIZE 4}
// Include configuration file
{$I ../raylib.inc}


interface

uses
  raylib;

type
  PMediaContext = ^TMediaContext;
  TMediaContext = pointer; //record end;

  PMediaStream = ^TMediaStream;
  TMediaStream = record
    videoTexture: TTexture;      // Current video frame texture (if available)
    audioStream: TAudioStream;   // Audio stream for playback (if available)
    ctx: PMediaContext;  //????         // Internal use only
  end;

  TMediaProperties = record
    durationSec: double;   // Media duration in seconds
    avgFPS: single;        // Average video FPS
    hasVideo: boolean;     // True if video is present
    hasAudio: boolean;     // True if audio is present
  end;

type
  TReadFn = function(userData: Pointer; buffer: PByte; bufferSize: Integer): Integer; cdecl;
  TSeekFn = function(userData: Pointer; offset: Int64; whence: Integer): Int64; cdecl;

  PMediaStreamReader = ^TMediaStreamReader;
  TMediaStreamReader = record
    readFn: TReadFn;
    seekFn: TSeekFn;
    userData: Pointer;
  end;

  //Flags for LoadMediaEx() to customize media loading.
  PMediaLoadFlag = ^TMediaLoadFlag;
  TMediaLoadFlag = Integer;
  const
    MEDIA_LOAD_AV           = TMediaLoadFlag(0);      // Load audio and video (default)
    MEDIA_LOAD_NO_AUDIO     = TMediaLoadFlag(1 shl 1); // Do not load audio
    MEDIA_LOAD_NO_VIDEO     = TMediaLoadFlag(1 shl 2); // Do not load video
    MEDIA_FLAG_LOOP         = TMediaLoadFlag(1 shl 3); // Loop playback
    MEDIA_FLAG_NO_AUTOPLAY  = TMediaLoadFlag(1 shl 4); // Load without starting playback

type
  PMediaState = ^TMediaState;
  TMediaState = Integer;
  const
    MEDIA_STATE_INVALID     = TMediaState(-1);     // Not loaded or initialized
    MEDIA_STATE_STOPPED     = TMediaState(0);      // Stopped
    MEDIA_STATE_PAUSED      = TMediaState(1);      // Paused
    MEDIA_STATE_PLAYING     = TMediaState(2);      // Playing (call UpdateMedia() each frame)

type
  PMediaConfigFlag = ^TMediaConfigFlag;
  TMediaConfigFlag = Integer;
  const
    MEDIA_VIDEO_QUEUE           = TMediaConfigFlag(0);  // Video packet queue capacity
    MEDIA_AUDIO_QUEUE           = TMediaConfigFlag(1);  // Audio packet queue capacity
    MEDIA_AUDIO_DECODED_BUFFER  = TMediaConfigFlag(2);  // Maximum decoded audio buffer size
    MEDIA_AUDIO_STREAM_BUFFER   = TMediaConfigFlag(3);  // Audio stream buffer size
    MEDIA_AUDIO_FORMAT          = TMediaConfigFlag(4);  // Output audio format (refer to MediaAudioFormat)
    MEDIA_AUDIO_CHANNELS        = TMediaConfigFlag(5);  // Number of audio channels
    MEDIA_VIDEO_MAX_DELAY       = TMediaConfigFlag(6);  // Maximum delay (ms) before discarding a video packet
    MEDIA_AUDIO_MAX_DELAY       = TMediaConfigFlag(7);  // Maximum delay (ms) before discarding an audio packet
    MEDIA_AUDIO_UPDATE          = TMediaConfigFlag(8);  // Max bytes uploaded to AudioStream per frame

type
  PMediaAudioFormat = ^TMediaAudioFormat;
  TMediaAudioFormat = Integer;
  const
    AUDIO_FMT_U8  = TMediaAudioFormat(0);  // Unsigned 8-bit
    AUDIO_FMT_S16 = TMediaAudioFormat(1);  // Signed 16-bit (default)
    AUDIO_FMT_S32 = TMediaAudioFormat(2);  // Signed 32-bit
    AUDIO_FMT_FLT = TMediaAudioFormat(3);  // Float
    AUDIO_FMT_DBL = TMediaAudioFormat(4);  // Double

  type
    TMediaStreamIOResult = (
      MEDIA_IO_EOF     = -541478725, // Конец потока достигнут (соответствует AVERROR_EOF)
      MEDIA_IO_INVALID = -22         // Некорректный вызов или операция (соответствует AVERROR(EINVAL))
    );

function LoadMedia(const fileName: PChar): TMediaStream; cdecl; external {$IFNDEF RAY_STATIC}'libraylib.so'{$ENDIF} name 'LoadMedia';
function LoadMediaEx(const fileName: PChar; flags: Integer): TMediaStream; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'LoadMediaEx';
function LoadMediaFromStream(streamReader: TMediaStreamReader; flags: integer): TMediaStream; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'LoadMediaFromStream';
function IsMediaValid(media: TMediaStream): Boolean; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'IsMediaValid';
function GetMediaProperties(media: TMediaStream): TMediaProperties; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'GetMediaProperties';
function UpdateMedia(media: PMediaStream): Boolean; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'UpdateMedia';
function UpdateMediaEx(media: PMediaStream; deltaTime: Double): Boolean; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'UpdateMediaEx';
function GetMediaState(media: TMediaStream): Integer; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'GetMediaState';
function GetMediaPosition(media: TMediaStream): Double; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'GetMediaPosition';
function SetMediaPosition(media: TMediaStream; timeSec: Double): Boolean; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'SetMediaPosition';
function SetMediaLooping(media: TMediaStream; loopPlay: Boolean): Boolean; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'SetMediaLooping';
function SetMediaFlag(flag: Integer; value: Integer): Integer; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'SetMediaFlag';
function GetMediaFlag(flag: Integer): Integer; cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'GetMediaFlag';
procedure UnloadMedia(media: PMediaStream); cdecl; external {$IFNDEF RAY_STATIC}cDllName{$ENDIF} name 'UnloadMedia';


implementation

end.

