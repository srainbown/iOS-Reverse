//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString;

@interface P2PCallController : UIViewController
{
    _Bool _isReject;
    _Bool _isAccept;
    NSString *_contactName;
}

@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(nonatomic) _Bool isAccept; // @synthesize isAccept=_isAccept;
@property(nonatomic) _Bool isReject; // @synthesize isReject=_isReject;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)onRejectPress:(id)arg1;
- (void)onAcceptPress:(id)arg1;
- (void)initComponent;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end

