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
	{ 0x7a43b97e, "usb_gstrings_attach" },
	{ 0x71ffc019, "usb_free_all_descriptors" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0x77e309f9, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65309948, "usb_function_unregister" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x7e8c49f, "snd_rawmidi_new" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5bda720d, "usb_ep_autoconfig" },
	{ 0x729a7be5, "snd_card_free_when_closed" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3a1144e0, "usb_function_register" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x65523885, "snd_card_new" },
	{ 0x83f119f4, "snd_component_add" },
	{ 0x6dc11b4d, "alloc_ep_req" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ca99dbe, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xdbae91a8, "snd_rawmidi_drop_output" },
	{ 0x83e9bef5, "usb_interface_id" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x160c4cd0, "snd_rawmidi_transmit" },
	{ 0xabdb3c17, "snd_rawmidi_receive" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "libcomposite,udc-core,snd-rawmidi,snd");


MODULE_INFO(srcversion, "75F3075C61CF7D6409D7E35");
