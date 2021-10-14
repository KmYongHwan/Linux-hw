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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x36ad1990, "drm_property_create_range" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0x2041b891, "drm_object_property_set_value" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x4f59052c, "drm_object_attach_property" },
	{ 0x334194f, "drm_mode_duplicate" },
	{ 0xbddfe7b1, "drm_mode_create_tv_properties" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x46de338, "drm_crtc_helper_set_mode" },
	{ 0xd9e4e430, "drm_i2c_encoder_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1fdd298, "drm_property_destroy" },
	{ 0xa3107bc2, "drm_mode_probed_add" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("i2c:ch7006");

MODULE_INFO(srcversion, "2E136D47188C67686B2B9F3");
