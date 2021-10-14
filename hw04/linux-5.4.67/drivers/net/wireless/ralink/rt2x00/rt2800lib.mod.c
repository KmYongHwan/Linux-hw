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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9d1f3191, "rt2x00lib_get_bssidx" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd71879ff, "rt2x00mac_conf_tx" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1e16d894, "rt2x00lib_txdone" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xa8baf7a6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x26b2e2b2, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xcbbd83e5, "rt2x00lib_txdone_nomatch" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xd1a4581, "ieee80211_restart_hw" },
	{ 0xe0bf0212, "rt2x00lib_txdone_noinfo" },
	{ 0xc6a70eb5, "rt2x00lib_set_mac_address" },
	{ 0x7e30f9b0, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x11d80dd4, "__skb_pad" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "68D63FFE3F1D3C691BD02B8");
