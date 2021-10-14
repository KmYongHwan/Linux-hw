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
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5ada0011, "input_event" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x68a57338, "snd_card_free" },
	{ 0xcd34c3c2, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x77e309f9, "snd_rawmidi_set_ops" },
	{ 0x9166fada, "strncpy" },
	{ 0x7e8c49f, "snd_rawmidi_new" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x65523885, "snd_card_new" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x729a7be5, "snd_card_free_when_closed" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xabdb3c17, "snd_rawmidi_receive" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,snd,snd-rawmidi");

MODULE_ALIAS("hid:b0003g*v0000041Ep00002801");

MODULE_INFO(srcversion, "317BA8C08664B929DE6F3F6");
