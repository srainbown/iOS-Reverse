//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PushImageCtrl.h"

@class UIButton, UIImageView, UIView;

@interface PushImageCtrl_iPhone : PushImageCtrl
{
    UIView *_phoneCtrView;
    UIImageView *_phoneImageCtrView;
    UIButton *_backBtn;
}

- (void)dealloc;
- (BOOL)shouldAutorotate;
- (void)enableNORightBtn;
- (void)deviceConnected;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (struct CGSize)resizeImageRect:(id)arg1;
- (int)dependImageWidth;
- (int)getShowImagePointY:(int)arg1;
- (int)getScrollerViewHeight;
- (void)CreatAlert:(id)arg1 withmessage:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)timeMethod;
- (void)startBtn:(id)arg1;
- (void)scrollViewTouch:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)abstractControlTransportActions:(id)arg1;
- (void)abstraceControlPicureExit;
- (void)backBtnPressed;
- (void)HomeBackView;
- (void)abstraceControlPlayStatus:(int)arg1;
- (void)viewDidLoad;

@end

