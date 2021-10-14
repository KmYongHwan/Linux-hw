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
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x3a943114, "sock_no_ioctl" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xbeeca5db, "sock_register" },
	{ 0x66984dba, "send_sig" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xb18156be, "skb_pull" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xf8b90c94, "sock_alloc_send_skb" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xba312d7b, "current_task" },
	{ 0x9e3e305d, "cfpkt_set_prio" },
	{ 0x2a09f713, "cfpkt_fromnative" },
	{ 0x6fe64a49, "skb_free_datagram" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa86b3fa, "caif_disconnect_client" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0x3d013eed, "caif_connect_client" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x66e9f04d, "release_sock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x46612729, "sk_alloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x400035e7, "__sk_mem_schedule" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1ef238a2, "sock_rfree" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2a557900, "sk_filter_trim_cap" },
	{ 0x4a237e57, "cfpkt_tonative" },
	{ 0xc5850110, "printk" },
	{ 0xb7b6874e, "caif_free_client" },
	{ 0x213fb3c, "sk_stream_kill_queues" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1446b60a, "caif_client_register_refcnt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "caif");


MODULE_INFO(srcversion, "4B32321E00C0736B63A98A1");
