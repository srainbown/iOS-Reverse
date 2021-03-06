//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface ISRRecorder : NSObject
{
    double mSampleRate;
    unsigned long mBits;
    unsigned long mChannels;
    NSTimer *_timer;
    struct {
        struct OpaqueAudioFileID *audioFile;
        struct AudioStreamBasicDescription dataFormat;
        struct OpaqueAudioQueue *queue;
        struct AudioQueueLevelMeterState *audioLevels;
        struct AudioQueueBuffer *buffers[10];
        unsigned int bufferByteSize;
        long long currentPacket;
        char recording;
        ISRRecorder *recorder;
    } recordState;
    id <ISRRecorderDelegate> recorderDelegate;
}

@property(nonatomic) id <ISRRecorderDelegate> recorderDelegate; // @synthesize recorderDelegate;
- (void)dealloc;
- (void)startGetPowerTimer;
- (void)powerHander;
- (void)initAudioSession;
- (void)setupAudioFormat:(struct AudioStreamBasicDescription *)arg1;
- (id)init;
- (void)setSampleRate:(double)arg1;
- (void)setAudioFormat:(double)arg1 theBitsPerChannel:(unsigned long)arg2 theChannelsPerFrame:(unsigned long)arg3;
- (float)getPower;
- (void)stop;
- (BOOL)start;

@end

