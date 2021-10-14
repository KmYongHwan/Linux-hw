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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x69350e79, "hdlc_start_xmit" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0xf26e4dd0, "tty_port_block_til_ready" },
	{ 0x47fe41f7, "hdlc_open" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x731e3a67, "alloc_hdlcdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xe94d2b89, "pcmcia_request_irq" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1b081bbf, "hdlc_ioctl" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x4d8323d2, "do_SAK" },
	{ 0x9a5ae1ec, "tty_hangup" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x586024ff, "tty_buffer_request_room" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc8740c5d, "tty_ldisc_deref" },
	{ 0x242eb9a3, "tty_ldisc_ref" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x1d2c1173, "tty_port_tty_set" },
	{ 0x26d6836d, "tty_port_close_end" },
	{ 0x925f403c, "tty_ldisc_flush" },
	{ 0xef6f5e7c, "tty_port_close_start" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0xd8d41f08, "hdlc_close" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xba312d7b, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc4142837, "seq_printf" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x629027cb, "tty_wakeup" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xebfcae36, "unregister_hdlc_device" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc,pcmcia");

MODULE_ALIAS("pcmcia:m02C5c0050f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "7A8036AE83A3C7C4DD67332");
