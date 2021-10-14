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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xaa01c190, "tty_register_ldisc" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcdcc7c53, "tty_mode_ioctl" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x754d539c, "strlen" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xbe58e8ca, "tty_unthrottle" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc5850110, "printk" },
	{ 0xa2e9cf72, "ax25_ip_xmit" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xd444fe9, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x29361773, "complete" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "1D0E04669D5C636E7C23D48");
