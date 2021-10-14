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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x5084668d, "rt2x00lib_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xe6bc1dbf, "rt2x00lib_dmastart" },
	{ 0x138471, "rt2x00queue_flush_queue" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xb1a0e3d8, "rt2x00queue_for_each_entry" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x349b1297, "rt2x00queue_start_queue" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x86e641cd, "rt2x00lib_remove_dev" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x26b2e2b2, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40555496, "usb_reset_device" },
	{ 0x193ed860, "rt2x00lib_rxdone" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0xe0bf0212, "rt2x00lib_txdone_noinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x71ba2e3e, "rt2x00lib_dmadone" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xf0827afa, "rt2x00lib_probe_dev" },
	{ 0x18c2e729, "rt2x00queue_stop_queue" },
	{ 0x942dfa71, "rt2x00lib_suspend" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "8EEEEC015EE0B18A21ED01F");
