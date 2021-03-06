//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AsyncSocket, NSString, NSTimer;

@interface MSViewController : UIViewController
{
    NSTimer *_isOnLineTimer;
    NSTimer *_isOffLineTimer;
    BOOL _isConnected;
    AsyncSocket *asyncSocket;
    int tvport;
    NSString *oldmsg;
}

- (void)dealloc;
- (void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
- (void)onSocket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)getTVVersion:(id)arg1;
- (void)setViewOrientation:(int)arg1;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)backClick;
- (id)getRightBtn;
- (void)isoffLineTimerEnd;
- (void)isOnLineTimerEnd;
- (void)timer1End;
- (void)offLine;
- (void)deviceConnected;
- (void)ifDeviceConneced;
- (void)deviceDisconnecte;
- (void)publicToPrivate;
- (void)viewWillAppear:(BOOL)arg1;
- (void)connectedDevice:(id)arg1;
- (void)disConnectedRightBtn;
- (void)connectedRightBtn;
- (void)refreshView;
- (void)pushConnectedView;
- (void)viewDidLoad;
- (void)createLeftBtn;
- (void)rBtnClick;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

