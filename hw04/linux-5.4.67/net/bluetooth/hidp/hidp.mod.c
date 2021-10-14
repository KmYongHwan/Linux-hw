#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x277a6037, "hid_add_device" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x99a5ca3c, "hid_ignore" },
	{ 0x53b954a2, "up_read" },
	{ 0xcdf2263e, "kernel_sendmsg" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x70115aba, "sock_no_setsockopt" },
	{ 0xbf0837a6, "hid_parse_report" },
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa4e0925e, "bt_sock_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12fa8db6, "hid_input_report" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x5ada0011, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x30cbccf3, "sock_no_recvmsg" },
	{ 0x733842dd, "bt_sock_unlink" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0xf744e56a, "l2cap_conn_put" },
	{ 0x46612729, "sk_alloc" },
	{ 0xba312d7b, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x12cc5e91, "l2cap_is_socket" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0xb18156be, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x3785c132, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa0fd0123, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0xab1637e0, "bt_sock_link" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xbb9c728c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1865e519, "proto_unregister" },
	{ 0x9f474e52, "l2cap_register_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd184ebc9, "__module_put_and_exit" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x387c599f, "hid_destroy_device" },
	{ 0x32ea5ef6, "hid_allocate_device" },
	{ 0x87fc8047, "l2cap_conn_get" },
	{ 0x963cf8c8, "get_device" },
	{ 0x9415ca79, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x688f350e, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xdc820989, "sock_no_sendmsg" },
	{ 0xad9bfdb5, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x62f4be2, "bt_procfs_init" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x813fbf2d, "bt_procfs_cleanup" },
	{ 0xf812cff6, "memscan" },
	{ 0x65cef9ad, "l2cap_unregister_user" },
	{ 0xeebd5754, "input_allocate_device" },
};

MODULE_INFO(depends, "hid,bluetooth");


MODULE_INFO(srcversion, "9EB8F1FB5E365A14B3F24A4");
