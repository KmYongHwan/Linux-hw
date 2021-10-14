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
	{ 0xe6a4e78e, "usb_serial_generic_get_icount" },
	{ 0xaba47f, "usb_serial_generic_tiocmiwait" },
	{ 0x14a03fca, "usb_serial_deregister_drivers" },
	{ 0x1c7d5054, "usb_serial_register_drivers" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x9e0fbd87, "usb_serial_handle_sysrq_char" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xede283d, "release_firmware" },
	{ 0x12a38747, "usleep_range" },
	{ 0x71deb539, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf730b782, "usb_serial_generic_close" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb6fe0f8, "usb_serial_generic_write_start" },
	{ 0xd134074b, "usb_serial_generic_submit_read_urbs" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v110Ap1250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1450d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1451d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1658d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1653d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "228F3A178FF4B8853712E3E");
