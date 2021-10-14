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
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x33f7781, "phy_driver_unregister" },
	{ 0x7ea19302, "put_device" },
	{ 0xd4904907, "phy_driver_register" },
	{ 0xc1d2d562, "ptp_clock_register" },
	{ 0x963cf8c8, "get_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x4b60104a, "ptp_find_pin" },
	{ 0xccbc429c, "ptp_clock_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xa5c8e942, "dev_mc_del" },
	{ 0xa8a40b25, "dev_mc_add" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcca6ed07, "genphy_soft_reset" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0x17212a9a, "ptp_clock_index" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xdb8dbcb7, "skb_complete_tx_timestamp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbccf5cb1, "ptp_clock_event" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0010000000000000010111001110????");

MODULE_INFO(srcversion, "11AF4100028AA7F232FC584");
