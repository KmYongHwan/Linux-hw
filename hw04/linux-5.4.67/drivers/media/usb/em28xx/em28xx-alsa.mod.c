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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x25033357, "_snd_pcm_stream_lock_irqsave" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x8156003, "em28xx_register_extension" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x9c92dc61, "em28xx_read_ac97" },
	{ 0xfb578fc5, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x9315ad8b, "em28xx_write_ac97" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x76ec27ca, "em28xx_unregister_extension" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa44201b4, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x65523885, "snd_card_new" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x605adfe9, "snd_pcm_hw_constraint_minmax" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x55eac8d0, "em28xx_audio_analog_set" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "em28xx,snd-pcm,snd");


MODULE_INFO(srcversion, "ABBA7DD885BD710168AE39A");
