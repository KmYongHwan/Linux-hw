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
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x77e309f9, "snd_rawmidi_set_ops" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0x7e8c49f, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x729a7be5, "snd_card_free_when_closed" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf2f8507a, "usb_urb_ep_type_check" },
	{ 0x65523885, "snd_card_new" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x160c4cd0, "snd_rawmidi_transmit" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xabdb3c17, "snd_rawmidi_receive" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");

MODULE_ALIAS("usb:v1397p00BDd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C98481D5BC39C62A19FA101");
