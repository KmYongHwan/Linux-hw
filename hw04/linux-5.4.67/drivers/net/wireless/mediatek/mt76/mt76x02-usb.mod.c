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
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0x88cafa31, "mt76x02_mac_set_beacon" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2ce66c75, "mt76u_vendor_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd1134d14, "mt76_tx_complete_skb" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x8790ab2f, "mt76x02_mac_write_txwi" },
	{ 0xea40f89e, "mt76x02_init_beacon_config" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xe374d806, "ieee80211_get_hdrlen_from_skb" },
	{ 0x171ca6c9, "mt76u_single_wr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x8ab5e1c9, "mt76_tx_status_skb_add" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xed8533e0, "mt76_mcu_msg_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf385571d, "mt76x02_resync_beacon_timer" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x19bd96ef, "mt76x02_remove_hdr_pad" },
	{ 0x723f456, "mt76x02_enqueue_buffered_bc" },
	{ 0xb1614452, "ieee80211_iterate_interfaces" },
	{ 0xc47fb68d, "mt76x02_update_beacon_iter" },
	{ 0x11d80dd4, "__skb_pad" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76-usb,mt76,cfg80211,mac80211");


MODULE_INFO(srcversion, "4C7C164B9C2DC3AC3011134");
