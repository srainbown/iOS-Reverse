//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSLayoutConstraint, NSString, UIButton, UILabel, UITextField;

@interface WKReplyInputView : UIView <UITextFieldDelegate>
{
    _Bool _isShow;
    _Bool _isChinese;
    CDUnknownBlockType _replyCommentBlock;
    UITextField *_textField;
    UIButton *_sendBtn;
    UILabel *_contentLbl;
    CDUnknownBlockType _showKeyBoardBlock;
    NSString *_commentId;
    NSString *_comment;
    NSString *_name;
    UIView *_commentBgView;
    NSLayoutConstraint *_centerLineTop;
}

+ (id)loadViewFromXib;
@property(nonatomic) __weak NSLayoutConstraint *centerLineTop; // @synthesize centerLineTop=_centerLineTop;
@property(nonatomic) _Bool isChinese; // @synthesize isChinese=_isChinese;
@property(nonatomic) __weak UIView *commentBgView; // @synthesize commentBgView=_commentBgView;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) CDUnknownBlockType showKeyBoardBlock; // @synthesize showKeyBoardBlock=_showKeyBoardBlock;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) __weak UILabel *contentLbl; // @synthesize contentLbl=_contentLbl;
@property(nonatomic) __weak UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) CDUnknownBlockType replyCommentBlock; // @synthesize replyCommentBlock=_replyCommentBlock;
- (void).cxx_destruct;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)handleKeyboardHide:(id)arg1;
- (void)handleKeyboardShow:(id)arg1;
- (void)unobserveKeyboardDisplay;
- (void)observeKeyboardDisplay;
- (void)setCommentId:(id)arg1 comment:(id)arg2 username:(id)arg3;
- (void)showInView:(id)arg1;
- (void)showInViewAtBottom:(id)arg1;
- (void)didMoveToSuperview;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

