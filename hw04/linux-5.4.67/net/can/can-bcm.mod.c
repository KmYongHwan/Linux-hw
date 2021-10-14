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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8e0f3c58, "can_rx_register" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x70115aba, "sock_no_setsockopt" },
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0x4c764fdc, "sock_gettstamp" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xc9456db6, "can_proto_unregister" },
	{ 0x628523ae, "proc_create_net_single" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd48a58f4, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x2ac0e6e, "PDE_DATA" },
	{ 0x2825d345, "sock_efree" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x6168380e, "seq_putc" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0xb2cdf064, "proc_mkdir_data" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x1ea0099a, "can_send" },
	{ 0x4dcde7e3, "__sock_recv_ts_and_drops" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xed2051c, "can_proto_register" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x30233bf, "can_rx_unregister" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6fe64a49, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "43A766B5E768811CA7701A5");
