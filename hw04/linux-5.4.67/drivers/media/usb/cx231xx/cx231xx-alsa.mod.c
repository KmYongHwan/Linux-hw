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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa771f909, "is_fw_load" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xc2fbd82a, "v4l2_subdev_call_wrappers" },
	{ 0x25033357, "_snd_pcm_stream_lock_irqsave" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8750fb1a, "cx231xx_register_extension" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa44201b4, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x65523885, "snd_card_new" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb718508f, "cx231xx_capture_start" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c1968f9, "cx231xx_set_alt_setting" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xb1c9131e, "cx231xx_unregister_extension" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "cx231xx,snd-pcm,videodev,snd");


MODULE_INFO(srcversion, "ED0AACD08CFFA33FE7D6CEC");
