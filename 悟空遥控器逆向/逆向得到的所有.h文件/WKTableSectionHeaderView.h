//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface WKTableSectionHeaderView : UIView
{
    UILabel *_titleLabel;
    UIButton *_moreButton;
    id <WKTableSectionHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WKTableSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)moreButtonClicked:(id)arg1;

@end

