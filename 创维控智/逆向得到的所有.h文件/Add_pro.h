//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AppDelegate, UITextField;

@interface Add_pro : UIViewController
{
    AppDelegate *delegate;
    _Bool _isLan;
    UITextField *_textFieldName;
}

@property(nonatomic) __weak UITextField *textFieldName; // @synthesize textFieldName=_textFieldName;
@property _Bool isLan; // @synthesize isLan=_isLan;
- (void).cxx_destruct;
- (void)MessageBack:(id)arg1;
- (void)btnOKTouchUpInside:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

