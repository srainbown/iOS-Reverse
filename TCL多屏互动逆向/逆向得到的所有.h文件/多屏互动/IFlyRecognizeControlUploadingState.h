//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFlyRecognizeControlBaseState.h"

@class UIActivityIndicatorView, UIButton;

@interface IFlyRecognizeControlUploadingState : IFlyRecognizeControlBaseState
{
    UIButton *_buttonCancle;
    UIActivityIndicatorView *_activity;
}

- (void)dealloc;
- (void)onCancelButtonDown:(id)arg1;
- (void)show;
- (void)hide;
- (id)initWithFrame:(struct CGRect)arg1 theEngine:(id)arg2 theSuperView:(id)arg3;

@end

