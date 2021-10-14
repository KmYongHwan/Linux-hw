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
	{ 0xcc10d7f, "drm_atomic_helper_connector_destroy_state" },
	{ 0x63322608, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0xe85d5ee4, "drm_atomic_helper_connector_reset" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x4074809f, "regmap_multi_reg_write" },
	{ 0x52e0607a, "drm_bridge_add" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc5850110, "printk" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x965ed1bc, "i2c_new_dummy" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x809712ff, "hdmi_avi_infoframe_pack" },
	{ 0x12d61d34, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x87df65c7, "drm_dp_link_configure" },
	{ 0x26815dbc, "drm_dp_link_rate_to_bw_code" },
	{ 0xdf3a8caf, "drm_dp_dpcd_write" },
	{ 0xefadfc55, "drm_dp_link_power_up" },
	{ 0x9f9f328c, "drm_dp_link_probe" },
	{ 0x789ba01e, "drm_helper_hpd_irq_event" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2f8a7908, "drm_connector_update_edid_property" },
	{ 0xf330301a, "drm_get_edid" },
	{ 0x1ecd3c0b, "drm_dp_dpcd_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd14cf43a, "drm_add_edid_modes" },
	{ 0xcd8b879a, "drm_err" },
	{ 0xca4a37d0, "drm_connector_attach_encoder" },
	{ 0xbbdcd391, "drm_connector_register" },
	{ 0x44403596, "drm_connector_init" },
	{ 0xf880b830, "drm_dp_aux_register" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0x37a0cba, "kfree" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x82d84000, "drm_bridge_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("i2c:anx7814");

MODULE_INFO(srcversion, "C39C7C0125D2BF53A883673");
