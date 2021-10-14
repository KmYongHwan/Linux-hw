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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x1f406f14, "netdev_boot_setup_check" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x52aea10e, "alloc_ltalkdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "appletalk");


MODULE_INFO(srcversion, "D1DC27A4175DBB36EDA3082");
