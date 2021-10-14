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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x84972054, "param_ops_byte" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xcae09d, "usbatm_usb_disconnect" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xede283d, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x71deb539, "request_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x40555496, "usb_reset_device" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeee83d72, "usb_driver_claim_interface" },
	{ 0xa6209c40, "atm_dev_signal_change" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x4d7cadaa, "usb_string" },
	{ 0xc5850110, "printk" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc8aedd9, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "830063AB5B56DA3DC21842C");
