//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFlyRecognizeControlBaseState.h"

#import "FinishListControlDelegate.h"

@class FinishListControl, UIButton, UIImage;

@interface IFlyRecognizeControlFinishMoreState : IFlyRecognizeControlBaseState <FinishListControlDelegate>
{
    UIButton *_buttonList;
    UIButton *_buttonCanel;
    UIImage *_listImage;
    UIImage *_listButtonNomarl;
    UIImage *_listButtonPressed;
    UIImage *_listButtonUpNomarl;
    UIImage *_listButtonUpPressed;
    FinishListControl *_finishListControl;
    int _currentErrorCode;
}

- (void)show;
- (void)hide;
- (void)onListButtonDown:(id)arg1;
- (void)onCancelButtonDown:(id)arg1;
- (void)setInfo:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 theEngine:(id)arg2 theSuperView:(id)arg3;
- (void)onGet:(id)arg1;
- (void)onResumeRecord:(id)arg1;
- (void)onResay:(id)arg1;
- (void)alert;

@end

