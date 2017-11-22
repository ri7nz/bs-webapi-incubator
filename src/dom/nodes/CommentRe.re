type t = Dom.comment;

include
  EventTargetRe.Impl(
    {
      type nonrec t = t;
    }
  );

include
  NodeRe.Impl(
    {
      type nonrec t = t;
    }
  );

include
  CharacterDataRe.Impl(
    {
      type nonrec t = t;
    }
  );

include
  NonDocumentTypeChildNodeRe.Impl(
    {
      type nonrec t = t;
    }
  );

include
  ChildNodeRe.Impl(
    {
      type nonrec t = t;
    }
  );

include
  SlotableRe.Impl(
    {
      type nonrec t = t;
    }
  );
