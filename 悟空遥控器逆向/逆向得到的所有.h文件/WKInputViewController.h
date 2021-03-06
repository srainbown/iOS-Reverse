//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "UITextViewDelegate.h"

@class NSString, UIButton, UITextView;

@interface WKInputViewController : WKBaseSubViewController <UITextViewDelegate>
{
    UITextView *_textView;
    UIButton *_doneBtn;
    unsigned long long _Ime;
    NSString *_preInput;
}

@property(retain, nonatomic) NSString *preInput; // @synthesize preInput=_preInput;
@property(nonatomic) unsigned long long Ime; // @synthesize Ime=_Ime;
@property(nonatomic) __weak UIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)sendRemoteImeText:(id)arg1;
- (void)doneBtnClicked:(id)arg1;
- (void)buildUI;
- (void)viewDidLoad;
- (id)initWithIme:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

