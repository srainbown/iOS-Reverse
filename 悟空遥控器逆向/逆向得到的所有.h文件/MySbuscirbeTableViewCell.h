//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface MySbuscirbeTableViewCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_startTimeLabel;
    UILabel *_endTimeLabel;
}

@property(nonatomic) __weak UILabel *endTimeLabel; // @synthesize endTimeLabel=_endTimeLabel;
@property(nonatomic) __weak UILabel *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setDataSource:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

