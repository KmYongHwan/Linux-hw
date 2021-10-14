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
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2277415e, "snd_power_wait" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x201e44f1, "snd_hwdep_new" },
	{  0x19df0, "__snd_usbmidi_create" },
	{ 0xf2f8507a, "usb_urb_ep_type_check" },
	{ 0x65523885, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8d14b8b, "usb_get_intf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0x879026c0, "usb_get_current_frame_number" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x90cb6031, "usb_put_intf" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd,snd-hwdep");

MODULE_ALIAS("usb:v0644p800Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p800Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8020d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "59AE68222B9C4FB246AF169");
