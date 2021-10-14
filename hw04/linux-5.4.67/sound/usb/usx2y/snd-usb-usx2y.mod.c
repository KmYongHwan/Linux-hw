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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0xb384607f, "snd_pcm_stop_xrun" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x61b322bf, "snd_pcm_lib_preallocate_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x201e44f1, "snd_hwdep_new" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{  0x19df0, "__snd_usbmidi_create" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0xf2f8507a, "usb_urb_ep_type_check" },
	{ 0x65523885, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x605adfe9, "snd_pcm_hw_constraint_minmax" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x879026c0, "usb_get_current_frame_number" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-pcm,snd,snd-hwdep");

MODULE_ALIAS("usb:v1604p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1604p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1604p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3E41A246FFCD81FCCE705D1");
