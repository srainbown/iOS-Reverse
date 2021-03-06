//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFlyRecognizeControlBaseState.h"

@class UIButton, UIProgressView;

@interface IFlyRecognizeControlAudioPauseState : IFlyRecognizeControlBaseState
{
    UIProgressView *_audioProgress;
    UIButton *_buttonCancel;
}

- (void)setProgressOnMainThread:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)onCancelButtonDown:(id)arg1;
- (void)onResumeButtonDown:(id)arg1;
- (void)show;
- (void)hide;
- (id)initWithFrame:(struct CGRect)arg1 theEngine:(id)arg2 theSuperView:(id)arg3;

@end

