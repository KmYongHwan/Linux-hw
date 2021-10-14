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
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x66e9f04d, "release_sock" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x12d38650, "strp_init" },
	{ 0xd11aea0e, "strp_unpause" },
	{ 0x39fcf409, "csum_and_copy_from_iter_full" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xe4733e60, "strp_data_ready" },
	{ 0x40aebdcf, "sock_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x628523ae, "proc_create_net_single" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1ef238a2, "sock_rfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbc376b57, "skb_unlink" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdd2099c0, "sk_wait_data" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x79347f6f, "strp_check_rcv" },
	{ 0x46612729, "sk_alloc" },
	{ 0xba312d7b, "current_task" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x3870557c, "sk_stream_wait_memory" },
	{ 0x3e9dad6a, "strp_done" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0xd0dabec4, "__sk_mem_reclaim" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xa0fd0123, "fput" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x793f8e76, "bpf_prog_get_type_dev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xbb9c728c, "proto_register" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xabcbf908, "_copy_from_iter_full_nocache" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x26038c3a, "kernel_sendpage" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0xbeeca5db, "sock_register" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1865e519, "proto_unregister" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0xde1eac14, "sock_alloc_file" },
	{ 0x6dc310b0, "sock_alloc" },
	{ 0x400035e7, "__sk_mem_schedule" },
	{ 0x12073e9f, "sk_stream_error" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x77cb3e89, "strp_stop" },
	{ 0x9415ca79, "__module_get" },
	{ 0x688f350e, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x45b12f43, "skb_splice_bits" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x5c8b5637, "fd_install" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa5a4cbcb, "sk_page_frag_refill" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x50e3fac4, "bpf_prog_put" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AA39BA77A31994E9EEAB809");
