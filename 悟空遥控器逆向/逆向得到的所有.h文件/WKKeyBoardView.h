//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseControlView.h"

@class UIButton;

@interface WKKeyBoardView : WKBaseControlView
{
    struct CGPoint _startTouch;
    UIButton *_backButton;
    UIButton *_oneBtn;
    UIButton *_twoBtn;
    UIButton *_threeBtn;
    UIButton *_fourBtn;
    UIButton *_fiveBtn;
    UIButton *_sixBtn;
    UIButton *_sevenBtn;
    UIButton *_eightBtn;
    UIButton *_nineBtn;
    UIButton *_zeroBtn;
}

@property(nonatomic) __weak UIButton *zeroBtn; // @synthesize zeroBtn=_zeroBtn;
@property(nonatomic) __weak UIButton *nineBtn; // @synthesize nineBtn=_nineBtn;
@property(nonatomic) __weak UIButton *eightBtn; // @synthesize eightBtn=_eightBtn;
@property(nonatomic) __weak UIButton *sevenBtn; // @synthesize sevenBtn=_sevenBtn;
@property(nonatomic) __weak UIButton *sixBtn; // @synthesize sixBtn=_sixBtn;
@property(nonatomic) __weak UIButton *fiveBtn; // @synthesize fiveBtn=_fiveBtn;
@property(nonatomic) __weak UIButton *fourBtn; // @synthesize fourBtn=_fourBtn;
@property(nonatomic) __weak UIButton *threeBtn; // @synthesize threeBtn=_threeBtn;
@property(nonatomic) __weak UIButton *twoBtn; // @synthesize twoBtn=_twoBtn;
@property(nonatomic) __weak UIButton *oneBtn; // @synthesize oneBtn=_oneBtn;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)showOrHiddenKeyboardView:(_Bool)arg1;
- (void)keyboardHiddenClicked:(id)arg1;
- (void)keyboardButtonClicked:(id)arg1;
- (void)hiddenPan:(id)arg1;
- (void)awakeFromNib;

@end

