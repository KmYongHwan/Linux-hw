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
	{ 0xf9a482f9, "msleep" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x77e309f9, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x7e8c49f, "snd_rawmidi_new" },
	{ 0xf7871355, "parport_unregister_driver" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xc65846c4, "parport_unregister_device" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0xa12eb18, "snd_rawmidi_transmit_peek" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xc4963523, "parport_claim" },
	{ 0x9eb4f9a2, "parport_release" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x65523885, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xc49090a, "snd_rawmidi_transmit_ack" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb0a23144, "parport_register_dev_model" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x69539117, "__parport_register_driver" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xabdb3c17, "snd_rawmidi_receive" },
	{ 0xf5ee1308, "platform_device_put" },
};

MODULE_INFO(depends, "snd-rawmidi,parport,snd");


MODULE_INFO(srcversion, "AF90DF7F945D9EAE531986C");
