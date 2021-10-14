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
	{ 0x14a03fca, "usb_serial_deregister_drivers" },
	{ 0x1c7d5054, "usb_serial_register_drivers" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4b4dba84, "ezusb_fx1_ihex_firmware_download" },
	{ 0x50127e2, "usb_serial_port_softint" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x6ff732c5, "tty_port_tty_hangup" },
	{ 0x37a0cba, "kfree" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dd981f, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial,ezusb");

MODULE_ALIAS("usb:v06CDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp012Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0131d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FE0652948EB2C59A332D72B");
