//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSTvCtrl.h"

@class NEUDropDown, UIButton, UILabel, UIView;

@interface MSTvCtrl_iPad : MSTvCtrl
{
    BOOL butBool;
    UIView *_gesturesView;
    UIView *_voicePadView;
    NEUDropDown *_dropDownipa;
    UIView *_ctrlPadView;
    UIView *_numPadView;
    UIView *_boardPadView;
    UIButton *_butName;
    UILabel *_butlabel;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)cutButtonAction:(id)arg1;
- (void)viewDidLoad;

@end

