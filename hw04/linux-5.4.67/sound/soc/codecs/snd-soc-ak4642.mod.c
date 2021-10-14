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
	{ 0xf9a482f9, "msleep" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0x7e106b92, "snd_soc_component_update_bits" },
	{ 0x9d5f15, "snd_soc_put_volsw" },
	{ 0x5a2d4419, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xfcf15af8, "dev_get_regmap" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xcd59c1ca, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd68e1e2b, "regcache_mark_dirty" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak4642");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4642C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4643");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4643C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4648");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak4648C*");
MODULE_ALIAS("i2c:ak4642");
MODULE_ALIAS("i2c:ak4643");
MODULE_ALIAS("i2c:ak4648");

MODULE_INFO(srcversion, "8B135C275F56AE9107C1622");
