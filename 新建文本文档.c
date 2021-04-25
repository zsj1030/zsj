void deleteNode(struct Stu *head,int n){         //删除n处的节点 
	struct  Stu *p = head,*pr = head;
	int i =0;
	while(i<n&&p!=NULL){       //到达指定节点，此时p指向指定节点，pr指向上一节点 
		pr = p;            //将p的地址赋值给pr
		p = p->next;       //p指向下一节点
		i++;
	}
	if(p!=NULL){               //当p不为空时，即p不能指向尾节点之后的节点
		pr->next = p->next;
		free(p);
	} else{
		printf("节点不存在！\n"); 
	}
} 








void insertNode(struct Stu *head,int n){    //插入节点 
	struct Stu *p = head,*pr;
	pr = (struct Stu*)malloc(sizeof(struct Stu));  //让pr指向新建节点申请的内存 
	printf("input data:\n");
	scanf("%d %s",&pr->id,pr->name);
	int i = 0;
    //当插入位置是尾节点时，只要在尾节点后再插入一个节点，并让尾节点的指针域指向新建节点，新建节点的指针域置空
    while(i<n&&p!=NULL){             //使p指向将要插入节点的位置 
    	p = p->next;
		i++;
	}
	if(p!=NULL){            //如果p没越界 
		pr->next = p->next; //将新建节点的地址指向将要插入节点的后一个节点的地址 
		p->next = pr;       //使插入节点指向新建节点 
	}else{
		printf("节点不存在！\n");
	}
}
