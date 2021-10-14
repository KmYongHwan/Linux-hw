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
	{ 0x66e9f04d, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xc46bedbf, "proc_create_seq_private" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x66984dba, "send_sig" },
	{ 0x4c764fdc, "sock_gettstamp" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2ac0e6e, "PDE_DATA" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x785dd9f2, "device_register" },
	{ 0x46612729, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x548bc933, "class_unregister" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x6168380e, "seq_putc" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb2cdf064, "proc_mkdir_data" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x8c7f745, "sock_wake_async" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x752832c, "noop_llseek" },
	{ 0x3785c132, "init_net" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x4dcde7e3, "__sock_recv_ts_and_drops" },
	{ 0xf720a60b, "module_put" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbb9c728c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x7ea19302, "put_device" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbeeca5db, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x1865e519, "proto_unregister" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2581e3be, "remove_proc_subtree" },
	{ 0xac1637ea, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x6fe64a49, "skb_free_datagram" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5AEDFEF40168540CCE591D7");
