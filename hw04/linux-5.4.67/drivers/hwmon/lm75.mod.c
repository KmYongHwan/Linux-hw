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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xfce9c328, "devm_hwmon_device_register_with_info" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,adt75");
MODULE_ALIAS("of:N*T*Cadi,adt75C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1775");
MODULE_ALIAS("of:N*T*Cdallas,ds1775C*");
MODULE_ALIAS("of:N*T*Cdallas,ds75");
MODULE_ALIAS("of:N*T*Cdallas,ds75C*");
MODULE_ALIAS("of:N*T*Cdallas,ds7505");
MODULE_ALIAS("of:N*T*Cdallas,ds7505C*");
MODULE_ALIAS("of:N*T*Cgmt,g751");
MODULE_ALIAS("of:N*T*Cgmt,g751C*");
MODULE_ALIAS("of:N*T*Cnational,lm75");
MODULE_ALIAS("of:N*T*Cnational,lm75C*");
MODULE_ALIAS("of:N*T*Cnational,lm75a");
MODULE_ALIAS("of:N*T*Cnational,lm75aC*");
MODULE_ALIAS("of:N*T*Cnational,lm75b");
MODULE_ALIAS("of:N*T*Cnational,lm75bC*");
MODULE_ALIAS("of:N*T*Cmaxim,max6625");
MODULE_ALIAS("of:N*T*Cmaxim,max6625C*");
MODULE_ALIAS("of:N*T*Cmaxim,max6626");
MODULE_ALIAS("of:N*T*Cmaxim,max6626C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31725");
MODULE_ALIAS("of:N*T*Cmaxim,max31725C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31726");
MODULE_ALIAS("of:N*T*Cmaxim,max31726C*");
MODULE_ALIAS("of:N*T*Cmaxim,mcp980x");
MODULE_ALIAS("of:N*T*Cmaxim,mcp980xC*");
MODULE_ALIAS("of:N*T*Cnxp,pct2075");
MODULE_ALIAS("of:N*T*Cnxp,pct2075C*");
MODULE_ALIAS("of:N*T*Cst,stds75");
MODULE_ALIAS("of:N*T*Cst,stds75C*");
MODULE_ALIAS("of:N*T*Cst,stlm75");
MODULE_ALIAS("of:N*T*Cst,stlm75C*");
MODULE_ALIAS("of:N*T*Cmicrochip,tcn75");
MODULE_ALIAS("of:N*T*Cmicrochip,tcn75C*");
MODULE_ALIAS("of:N*T*Cti,tmp100");
MODULE_ALIAS("of:N*T*Cti,tmp100C*");
MODULE_ALIAS("of:N*T*Cti,tmp101");
MODULE_ALIAS("of:N*T*Cti,tmp101C*");
MODULE_ALIAS("of:N*T*Cti,tmp105");
MODULE_ALIAS("of:N*T*Cti,tmp105C*");
MODULE_ALIAS("of:N*T*Cti,tmp112");
MODULE_ALIAS("of:N*T*Cti,tmp112C*");
MODULE_ALIAS("of:N*T*Cti,tmp175");
MODULE_ALIAS("of:N*T*Cti,tmp175C*");
MODULE_ALIAS("of:N*T*Cti,tmp275");
MODULE_ALIAS("of:N*T*Cti,tmp275C*");
MODULE_ALIAS("of:N*T*Cti,tmp75");
MODULE_ALIAS("of:N*T*Cti,tmp75C*");
MODULE_ALIAS("of:N*T*Cti,tmp75b");
MODULE_ALIAS("of:N*T*Cti,tmp75bC*");
MODULE_ALIAS("of:N*T*Cti,tmp75c");
MODULE_ALIAS("of:N*T*Cti,tmp75cC*");
MODULE_ALIAS("i2c:adt75");
MODULE_ALIAS("i2c:ds1775");
MODULE_ALIAS("i2c:ds75");
MODULE_ALIAS("i2c:ds7505");
MODULE_ALIAS("i2c:g751");
MODULE_ALIAS("i2c:lm75");
MODULE_ALIAS("i2c:lm75a");
MODULE_ALIAS("i2c:lm75b");
MODULE_ALIAS("i2c:max6625");
MODULE_ALIAS("i2c:max6626");
MODULE_ALIAS("i2c:max31725");
MODULE_ALIAS("i2c:max31726");
MODULE_ALIAS("i2c:mcp980x");
MODULE_ALIAS("i2c:pct2075");
MODULE_ALIAS("i2c:stds75");
MODULE_ALIAS("i2c:stlm75");
MODULE_ALIAS("i2c:tcn75");
MODULE_ALIAS("i2c:tmp100");
MODULE_ALIAS("i2c:tmp101");
MODULE_ALIAS("i2c:tmp105");
MODULE_ALIAS("i2c:tmp112");
MODULE_ALIAS("i2c:tmp175");
MODULE_ALIAS("i2c:tmp275");
MODULE_ALIAS("i2c:tmp75");
MODULE_ALIAS("i2c:tmp75b");
MODULE_ALIAS("i2c:tmp75c");

MODULE_INFO(srcversion, "AD1C65AF09F7DB5F657A8BE");
