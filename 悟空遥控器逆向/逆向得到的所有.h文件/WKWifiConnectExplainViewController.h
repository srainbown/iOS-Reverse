//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class UIButton;

@interface WKWifiConnectExplainViewController : BaseViewController
{
    UIButton *_continueButton;
    UIButton *_notContinueButton;
    UIButton *_buyProductButtton;
}

@property(nonatomic) __weak UIButton *buyProductButtton; // @synthesize buyProductButtton=_buyProductButtton;
@property(nonatomic) __weak UIButton *notContinueButton; // @synthesize notContinueButton=_notContinueButton;
@property(nonatomic) __weak UIButton *continueButton; // @synthesize continueButton=_continueButton;
- (void).cxx_destruct;
- (void)buyProductAction:(id)arg1;
- (void)notContinueButton:(id)arg1;
- (void)continueButtonAction:(id)arg1;
- (void)viewDidLoad;

@end

