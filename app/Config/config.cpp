
namespace Config
{
    const ConfigCollection     &getConfig(void)
    {
        ConfigCollection    &collection = *(new ConfigCollection);

        collection
            .add("app_name", "toto")
            .add("int_data", 5)
            .add("tls", true)
            .add("db", (new ConfigCollection())->get()
                    .add("name", "totodb")
                    .add("user", "toto"));

        return collection;
    }
}