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
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x1eae0cc5, "flexcop_device_initialize" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb0369a86, "flexcop_device_kfree" },
	{ 0x435e874c, "flexcop_sram_ctrl" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbc6d3c05, "flexcop_device_kmalloc" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xac682cba, "flexcop_sram_set_dest" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x43b3d150, "flexcop_pass_dmx_packets" },
	{ 0x504d34e6, "flexcop_wan_set_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xa1df4cf7, "flexcop_device_exit" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A105277B7B1F1A42FA1D7CC");
