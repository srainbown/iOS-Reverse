//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSString;

@interface CameraManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _isRun;
    _Bool _isFinishCaptureOutput;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_input;
    AVCaptureVideoDataOutput *_output;
    AVCaptureVideoPreviewLayer *_previewLayer;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isFinishCaptureOutput; // @synthesize isFinishCaptureOutput=_isFinishCaptureOutput;
@property(nonatomic) _Bool isRun; // @synthesize isRun=_isRun;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureVideoDataOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVCaptureDeviceInput *input; // @synthesize input=_input;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopCamera;
- (void)startCamera:(_Bool)arg1;
- (void)addCameraView:(id)arg1;
@property(nonatomic) long long frameRate;
- (void)setFrontCameraChangeOrientationToLandscapeRight;
- (void)autoFocusAtPoint:(struct CGPoint)arg1;
- (int)cameraChange;
- (unsigned long long)cameraCount;
- (id)cameraWithPosition:(long long)arg1;
- (id)backFacingCamera;
- (id)frontFacingCamera;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

