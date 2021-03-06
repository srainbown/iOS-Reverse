//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIImageView, UITextField;

@interface QRCodeSetWIFIController : UIViewController
{
    UITextField *_ssidField;
    UITextField *_pwdField;
    UIImageView *_qrcodeImage;
}

@property(retain, nonatomic) UIImageView *qrcodeImage; // @synthesize qrcodeImage=_qrcodeImage;
@property(retain, nonatomic) UITextField *pwdField; // @synthesize pwdField=_pwdField;
@property(retain, nonatomic) UITextField *ssidField; // @synthesize ssidField=_ssidField;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)onMakePress;
- (void)onBackPress;
- (void)onKeyBoardDown:(id)arg1;
- (void)initComponent;
- (id)fetchSSIDInfo;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

