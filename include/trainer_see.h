#ifndef GUARD_TRAINER_SEE_H
#define GUARD_TRAINER_SEE_H

struct ApproachingTrainer
{
    u8 objectEventId;
    u8 radius; // plus 1
    const u8 *trainerScriptPtr;
    u8 taskId;
};

extern u16 gWhichTrainerToFaceAfterBattle;
extern u8 gPostBattleMovementScript[4];
extern struct ApproachingTrainer gApproachingTrainers[2];
extern u8 gNoOfApproachingTrainers;
extern bool8 gTrainerApproachedPlayer;
extern u8 gApproachingTrainerId;

bool8 CheckForTrainersWantingBattle(void);
void sub_80B4578(struct ObjectEvent *var);
void EndTrainerApproach(void);
void TryPrepareSecondApproachingTrainer(void);

u8 FldEff_ExclamationMarkIcon(void);
u8 FldEff_QuestionMarkIcon(void);
u8 FldEff_HeartIcon(void);
u8 FldEff_MusicalNoteIcon(void);
u8 FldEff_LightbulbIcon(void);
u8 FldEff_WaterDropletIcon(void);
u8 FldEff_HappyIcon(void);
u8 FldEff_AngryIcon(void);
u8 FldEff_CircleIcon(void);
u8 FldEff_XIcon(void);
u8 FldEff_FistIcon(void);
u8 FldEff_PeaceIcon(void);
u8 FldEff_HandIcon(void);
u8 FldEff_DroolingIcon(void);
u8 FldEff_FlexIcon(void);
u8 FldEff_DevilishIcon(void);
u8 FldEff_DefeatIcon(void);
u8 FldEff_AnguishIcon(void);
u8 FldEff_EllipsisIcon(void);
u8 FldEff_GloomIcon(void);

u8 GetCurrentApproachingTrainerObjectEventId(void);
u8 GetChosenApproachingTrainerObjectEventId(u8 arrayId);
void PlayerFaceTrainerAfterBattle(void);

#endif // GUARD_TRAINER_SEE_H
