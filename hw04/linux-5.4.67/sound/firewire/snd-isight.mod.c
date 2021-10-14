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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xc593fe8f, "fw_iso_resources_update" },
	{ 0xf44a972b, "driver_register" },
	{ 0x50b184ca, "iso_packets_buffer_init" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x37e22f9b, "fw_iso_resources_init" },
	{ 0xb384607f, "snd_pcm_stop_xrun" },
	{ 0x68b6685d, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0x1e9102db, "fw_iso_context_start" },
	{ 0xd81df618, "fw_iso_context_queue_flush" },
	{ 0xfb578fc5, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x8f991301, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x20ca4a8b, "iso_packets_buffer_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x65523885, "snd_card_new" },
	{ 0xe7427071, "fw_iso_resources_destroy" },
	{ 0xdbb8a7c7, "fw_iso_context_queue" },
	{ 0x7ea19302, "put_device" },
	{ 0x5855a5b7, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc5db6445, "fw_iso_resources_allocate" },
	{ 0x963cf8c8, "get_device" },
	{ 0xf3c267e, "fw_iso_context_stop" },
	{ 0x89792eb7, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x19fe29ed, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0xc38a66e0, "snd_fw_transaction" },
	{ 0x806bb3d1, "fw_iso_resources_free" },
	{ 0x6273ae20, "fw_iso_context_destroy" },
};

MODULE_INFO(depends, "firewire-core,snd-firewire-lib,snd-pcm,snd");

MODULE_ALIAS("ieee1394:ven*mo*sp00000A27ver00000010*");

MODULE_INFO(srcversion, "4684208F7E1898B13612A76");
