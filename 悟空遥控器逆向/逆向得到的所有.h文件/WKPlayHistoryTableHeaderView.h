//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface WKPlayHistoryTableHeaderView : UIView
{
    UILabel *_headerLabel;
    UIButton *_unfoldBtn;
    UIView *backgroudView;
    double realHeight;
    id <WKPlayHistoryTableHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WKPlayHistoryTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unfoldBtnClicked:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)buttonAction:(id)arg1;
- (void)setHDLiveDatasource:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

