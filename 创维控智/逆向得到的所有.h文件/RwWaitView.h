//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UITextField;

@interface RwWaitView : UIControl <UITextFieldDelegate>
{
    UIImageView *_imageBg;
    UILabel *_lblTitle;
    UITextField *_neirongTest;
    UIButton *_btnOK;
    _Bool _isHaveText;
    NSString *_text;
    UILabel *_lblResult;
    NSString *_title;
    id <RwWaitViewDelegate> _delegate;
}

@property(retain) id <RwWaitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSString *title; // @synthesize title=_title;
@property(retain) UILabel *lblResult; // @synthesize lblResult=_lblResult;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property _Bool isHaveText; // @synthesize isHaveText=_isHaveText;
- (void).cxx_destruct;
- (void)btnClick:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setMidString:(id)arg1;
- (void)viewHidden;
- (void)show:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 Title:(id)arg2 MidString:(id)arg3 Text:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

