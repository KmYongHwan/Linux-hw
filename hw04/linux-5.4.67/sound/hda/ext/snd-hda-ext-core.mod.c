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
	{ 0xf44a972b, "driver_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb004ccfc, "snd_hdac_device_exit" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xae374e8a, "snd_hda_bus_type" },
	{ 0x412d9c32, "snd_hdac_bus_init_cmd_io" },
	{ 0x76418624, "snd_hdac_bus_stop_cmd_io" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c74e1a6, "snd_hdac_stream_assign" },
	{ 0x52962d51, "snd_hdac_device_init" },
	{ 0xa04d39a5, "snd_hdac_device_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc6c843aa, "snd_hdac_stream_init" },
	{ 0xd14158f7, "snd_hdac_bus_init" },
	{ 0x52ed014a, "snd_hdac_stream_stop" },
	{ 0xb76f9217, "snd_hdac_device_register" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xaeade15, "snd_hdac_bus_exit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xb47d9095, "snd_hdac_bus_stop_chip" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3bae9108, "snd_hdac_stream_release" },
};

MODULE_INFO(depends, "snd-hda-core");


MODULE_INFO(srcversion, "5D5130CACA0B7C5BAED42A7");
